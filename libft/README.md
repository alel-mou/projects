*This project has been created as part of the 42 curriculum by alel-mou.*

# Libft

## Description

Libft is a C library of general-purpose functions, built as part of the 42 curriculum. Its goal is to understand how common library functions work by implementing them, while practicing pointers, memory allocation, strings, callbacks, and linked lists.

The project produces `libft.a`, a static library that can be linked into other C programs. The public interface is declared in `libft/libft.h`. This repository follows the Libft version 19.3 subject, which includes linked-list functions in the mandatory part.

## Instructions

### Requirements and compilation

Use a Unix-like environment (Linux, macOS, or WSL) with `make`, a C compiler available as `cc`, and `ar` installed.

From the repository root:

```sh
make -C libft
```

The Makefile compiles with `-Wall -Wextra -Werror` and uses `ar rcs` to create `libft/libft.a`. All three parts of the library, including linked lists, are included in the default build.

| Command | Purpose |
| --- | --- |
| `make -C libft` | Build the library. |
| `make -C libft clean` | Remove object files. |
| `make -C libft fclean` | Remove object files and the library. |
| `make -C libft re` | Rebuild the library from scratch. |

### Using the library

Include `libft.h` in your program and link the archive after your source files. For example, save this as `example.c` at the repository root:

```c
#include "libft.h"

int main(void)
{
    char *message;

    message = ft_strjoin("Hello, ", "Libft!");
    if (message == NULL)
        return (1);
    ft_putendl_fd(message, 1);
    free(message);
    return (0);
}
```

Compile and run it:

```sh
cc -Wall -Wextra -Werror -I libft example.c libft/libft.a -o example
./example
```

Expected output: `Hello, Libft!` followed by a newline. The library itself has no executable entry point and requires no separate installation.

## Library details

### Part 1: Libc functions

These functions reproduce the subject's specified standard-library behavior with an `ft_` prefix.

| Category | Functions | Purpose |
| --- | --- | --- |
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | Test character classes. |
| Case conversion | `ft_toupper`, `ft_tolower` | Convert letter case. |
| Memory operations | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` | Fill, copy, search, and compare memory; `ft_memmove` supports overlapping regions. |
| String length and copying | `ft_strlen`, `ft_strlcpy`, `ft_strlcat` | Measure strings and perform size-bounded copying or concatenation. |
| String searching and comparison | `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr` | Find characters or substrings and compare strings. |
| Conversion | `ft_atoi` | Convert a string to an integer. |
| Allocation | `ft_calloc`, `ft_strdup` | Allocate zero-initialized storage or duplicate a string. |

### Part 2: Additional functions

| Functions | Purpose |
| --- | --- |
| `ft_substr` | Allocate a substring from a starting index with a maximum length. |
| `ft_strjoin` | Allocate the concatenation of two strings. |
| `ft_strtrim` | Allocate a copy with characters from a set removed at both ends. |
| `ft_split` | Split a string on a delimiter into a dynamically allocated, NULL-terminated array of strings. |
| `ft_itoa` | Allocate the string representation of an integer. |
| `ft_strmapi` | Allocate a new string by applying a callback to each character and its index. |
| `ft_striteri` | Apply a callback to each character's address and index, allowing changes in place. |
| `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | Write a character, string, line, or integer to a file descriptor. |

### Part 3: Linked lists

The `t_list` structure contains a `void *content` pointer and a pointer to the next node. The final node's `next` pointer is `NULL`.

| Functions | Purpose |
| --- | --- |
| `ft_lstnew` | Allocate a node holding the supplied content pointer. |
| `ft_lstadd_front`, `ft_lstadd_back` | Add a node at the beginning or end of a list. |
| `ft_lstsize`, `ft_lstlast` | Count nodes or retrieve the final node. |
| `ft_lstdelone` | Delete one node and its content using a supplied deletion callback. |
| `ft_lstclear` | Delete a node and all successors, then set the list pointer to NULL. |
| `ft_lstiter` | Apply a callback to each node's content. |
| `ft_lstmap` | Create a new list by transforming each node's content, using a deletion callback for cleanup if allocation fails. |

### Memory ownership

Check allocation results before using them. Free allocated strings and buffers when they are no longer needed. For `ft_split`, free each string before freeing the array. `ft_lstnew` stores the supplied content pointer; it does not duplicate the content. Choose deletion callbacks that match how the content was allocated, and use `ft_lstclear` to release a complete list.

## Resources

- **Libft subject, version 19.3** (`libftnew.pdf` supplied with this task): project specifications, function contracts, and README requirements.
- **System manual pages**: consult `man 3 strlen`, `man 3 memcpy`, `man 3 memmove`, `man 3 malloc`, and `man 3 free` for function behavior and memory management; consult `man 2 write` for file-descriptor output. BSD manual pages cover `strlcpy`, `strlcat`, and `strnstr` where local manuals do not provide them.
- **GNU Make manual** and **GNU Binutils `ar` manual**: references for build rules and static archives.
- **42 Norm**: the school's coding-style reference for C source and header files.

### AI use

AI was used to read the supplied subject, inspect the existing Makefile and header, and draft this README, including the function overview and usage example. No library source code was changed as part of this documentation task. This statement describes this task only; it does not establish whether AI was used during earlier development.
