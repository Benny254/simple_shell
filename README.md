0x16. C - Simple Shell

- chk_interactive - checks if shell is interactive mode
- _delim - checks if character is delimeter
- is_upper - checks  alphabetic character
- convert_string - convert string to integer
- change_number - converts long integer to character array representing

- string_convert - convert string representation of integer to integer value
- print_err - prints error message
- prints_string - prints input string
- dec_print - function prints decimal number
- rm_comment - replaces first instance of '#' with '\0'

- eprintch - writes character to stderr
- write_ch - writes character to given fd
- pfd_input- prints input string
- cp_char - duplicates characters
- free_p - frees pointer and NULLs address

- chk_filetype - function checks whether file specified is regular file
- chk_cmd - manages PATH environment variable and finds commands
- chk_start - check if needle starts with haystack
- cat_str - concanates two strings
- len_str - return the length of a string

- do_exit - to exit the shell
- change_dir - change the current directory of the process
- help_func - change the current directory of the process
- disp_hist - to display the history list, one command by line preceded with line numbers
- new_str - replaces a string

- alias_string - to set alias to string
- alias_set - set alias to string
- alias_rp - replaces aliases in tokenized string
- alias_prt - print an alias string
- get_alias - mimics alias builtin

- cpy_str - copy a string
- dupstr - duplicate string
- print_str - print an input string
- printch - write the character c to stdout
- comp_str - perform lexicogarphic comparison of two strings

- new_node - add node to start of the list
- node_add - add a node to the end of the list
- str_print - print only the str element of a list_t linked list
- node_delete - delete node at given index
- node_free - free all nodes of a list

- str_array - return array of strings of the list->str
- elem_list - print all elements of a linked list
- node_start - return node whose string starts with prefix
- node_get - get the index of a node
- len_list - determine length of linked list

- string_split - split a string into words
- str_split - split a string into words & repeat delimiters are ignored
- allocmem- reallocate a block of memory
- bytemem - fill memory with constant byte
- free_str - free a string of strings

- prtenv - prints current environment
- env_var - get value of an environ variable
- init_env - to initialize new environment variable
- rem_env - remove an environment variable
- envpop - to populates env linked list

- buf_input - to buffers chained commands
- type_in - get a line minus the newline
- bufread - read a buffer
- nextline - get the next line of an input from STDIN
- handlec - the block ctrl-C

- file_hist - to get the history file
- histfile - create file or appends to an existing file
- histread - read history from file
- list_hist - add entry to a history linked list
- histnum - renumber the history linked list after changes

- envstr - return the string array copy of our environ
- rem_venv - remove an environment variable
- init_evar - to initialize a new environment variable
- int_info - initialize sh_info_t struct
- infofr - free sh_info_t struct fields

- infoclr - initialize sh_info_t struct
- cppy_str - copy a string
- concat_str - concate two strings
- loc_ch - locate a character in a string

- testchain - to test if current character in buffer is a chain delimeter
- chainchk - check if we should continue chaining based on last status
- vars_rp - replace vars in the tokenized string

- _shell - the main shell loop
- builtincmd - find a builtin command
- cmd_find - find a command in PATH
- run_cmd - fork an exec thread to run cmd
