#ifndef LRU_K_H_INCLUDED
#define LRU_K_H_INCLUDED

#include "Doubly_connected_list.h"
#include "HashTable.h"

#define relative_hash_table_size 0.1

int lru_k();

int read_number(int *number);

struct list_LRU {
  struct List *list;
  struct list_elem *inf;
};

int LRU_step(struct list_LRU *cache, struct hash_map *hash_table, int page,
             int page_num, int len_cache);

struct list_LRU *create_list_LRU();

void destruct_list_LRU(struct list_LRU *list);

#endif // LRU_K_H_INCLUDED
