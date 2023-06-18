# 0x1A - Hash Tables

## Synopsis

In this project we covered hash tables in C in order to learn a more advanced data storage structure

## File Descriptions

### Mandatory

- `0-hash_table_create.c`: This file contains a function that creates a hash table. The function takes the size of the array of the hash table as an input and returns a pointer to the newly created hash table.
- `1-djb2.c`: This file contains the `djb2` function, an algorithm (created by Dan Bernstein) that generates a hash value from a string. This is used to convert a string key into a random and (hopefully) unique index for the hash table array.
- `2-key_index.c`: This file contains a function that gives you the index of a key. The function takes a key (string) and the size of the array of the hash table as inputs. It uses the `djb2` hash function to compute the index.
- `3-hash_table_set.c`: This file contains a function that adds an element to the hash table. The function takes a hash table, a key, and a value as inputs. If the key already exists in the hash table, the function replaces the value with the new value. If the key does not exist, the function creates a new node in the hash table.
- `4-hash_table_get.c`:This file contains a function that retrieves a value associated with a key. The function takes a hash table and a key as inputs and returns the value associated with the key, or `NULL` if the key couldn't be found.
- `5-hash_table_print.c`: This file contains a function that prints a hash table. The function takes a hash table as an input and prints each key/value pair in the order they appear in the array of the hash table.
- `6-hash_table_delete.c`: This file contains a function that deletes a hash table. The function takes a hash table as an input and deletes the entire hash table, freeing everything.

### Advanced

- `100-sorted_hash_table.c`: This file contains functions that handle sorted hash tables. The functions include creating a new sorted hash table, adding an element to the sorted hash table, retrieving a value associated with a key, printing the sorted hash table, and deleting the sorted hash table.

## Author

Chris Stamper - [ZeroDayPoke](https://github.com/ZeroDayPoke)
