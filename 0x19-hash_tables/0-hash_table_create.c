#include "hash_tables.h"
/**
 * hash_table_create - builds hash table
 * @size: size of hash table
 * Return: pointer to first element of hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tb;
	hash_node_t **array;

	if (!size)
		return (NULL);
	hash_tb = malloc(sizeof(hash_table_t));
	{
		if (hash_tb == NULL)
			return (NULL);
	}
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		free(hash_tb);
		return (NULL);
	}
	hash_tb->size = size;
	hash_tb->array = array;
	return (hash_tb);
}
