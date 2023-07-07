#!/bin/bash
ar -rcs liball.a $(gcc -Wall -pedantic -Werror -Wextra -c *c)
