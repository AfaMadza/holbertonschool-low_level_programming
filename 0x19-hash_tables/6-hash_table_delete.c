#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr, *tmp;
	unsigned long int size, i = 0;

	if (ht == NULL || ht->array == NULL)
		exit(EXIT_FAILURE);

	else
	{
		size = ht->size;
		while (i < size)
		{
			curr = ht->array[i];
			while (curr != NULL)
			{
				tmp = curr;
				if (tmp->key != NULL)
					free(tmp->key);
				if (tmp->value != NULL)
					free(tmp->value);
				curr = tmp->next;
				free(tmp);
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}

}
