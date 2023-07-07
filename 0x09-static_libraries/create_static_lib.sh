#!/bin/bash
ar -rcs liball.a $(gcc gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *c)
