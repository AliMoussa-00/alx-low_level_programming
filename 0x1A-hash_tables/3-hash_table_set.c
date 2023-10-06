#include "hash_tables.h"

/**
 * free_node - free a node of table
 * @node: the pointer to the node
 * Return: void
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * free_table - free a the entire table
 * @table: the pointer to the table
 * Return: void
 */
void free_table(hash_table_t *table)
{
	hash_node_t *tmp, *current;
	unsigned long int i;

	for (i = 0; i < table->size; i++)
	{
		tmp = table->array[i];

		while (tmp && tmp->next)
		{
			current = tmp;
			tmp = tmp->next;
			free_node(current);
		}

		if (tmp)
			free_node(tmp);
	}

	free(table->array);
	free(table);
}

/**
 * create_node - create a new node.
 * @key: the key of the node.
 * @value: the value of the node.
 * Return: a new node.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	if (!key || *key == '\0' || !value)
		return (NULL);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = NULL;

	return (node);
}

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the pointer to the hash table
 * @key: is the key of the new element
 * @value: the value of the new element
 * Return: 1 if Success, else 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *current;
	unsigned long int index;
	char *tmp_value;

	if (!ht || !key || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	if (ht->array[index] != NULL)
	{
		current = ht->array[index];
		while (current)
		{
			if (strcmp(current->key, key) == 0)
			{
				tmp_value = strdup(value);
				if (!tmp_value)
					return (0);

				free(current->value);
				current->value = tmp_value;

				return (1);
			}
			current = current->next;
		}
	}

	node = create_node(key, value);
	if (!node)
		return (0);

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}

