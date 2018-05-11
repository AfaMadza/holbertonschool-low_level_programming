#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 * Return: associated value or NULL otherwise
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int size, i = 0;
	int flag = 0;

	if (ht == NULL || ht->array == NULL)
		exit(EXIT_FAILURE);

	else
	{
		printf("{");
		size = ht->size;
		while (i < size)
		{
			curr = ht->array[i];
			if (curr)
			{
				if (flag == 1)
					printf(", ");
				while (curr->next != NULL)
				{
					printf("'%s': '%s', ", curr->key, curr->value);
					curr = curr->next;
				}
				printf("'%s': '%s'", curr->key, curr->value);
				if (flag == 0)
					flag = 1;
			}
			i++;
		}
		printf("}\n");
	}

}
