#include "hash_tables.h"
/**
 * hash_table_set - adds an element to a hash table
 * @ht: pointer to hash table
 * @key: key
 * @value: value associated with key
 * Return: 1 for success or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current, *tmp, *new;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current = tmp = ht->array[index];
	if (current)
	{
		while (tmp)
		{
			if (!strcmp(tmp->key, key))
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
	}
	new = create_hash_node(key, value);
	if (new == NULL)
		return (0);
	new->next = current;
	ht->array[index] = new;
	return (1);
}
/**
 * create_hash_node - adds a node to the hash table
 * @key: pointer to the key to be added
 * @value: value associated with key
 * Return: pointer to new node or NULL otherwise
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		if (new->key)
			free(new->key);
		free(new);
		return (NULL);
	}
	return (new);
}
