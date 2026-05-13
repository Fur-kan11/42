*This project has been created as part of the 42 curriculum by mehozer.*

# Libft – Your First C Library

## Description

Libft is a foundational project at 42 that consists of re-implementing standard C library (libc) functions and creating additional utility functions.

The purpose of this project is to:
- Develop strong memory management skills
- Improve pointer manipulation and low-level programming knowledge
- Build a personal static library (libft.a) to be reused in future projects

All functions are implemented according to the original behavior described in the official man pages, with the required "ft_" prefix.

---

## Instructions

The project is compiled using a Makefile with the following flags:

-Wall -Wextra -Werror

Available Makefile rules:

- make       → Compiles all source files and creates libft.a
- make clean → Removes object files
- make fclean → Removes object files and the library file
- make re    → Recompiles the entire project

The static library is created using:

ar rcs libft.a

To use the library in another project:

cc main.c -L. -lft -o program

---

## Library Description

The library is divided into three mandatory parts:

### Part 1 – Libc Functions

Re-implementation of standard C functions including:

Character checks:
ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint

Memory functions:
ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp

String functions:
ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr,
ft_strncmp, ft_strnstr

Conversions:
ft_atoi, ft_toupper, ft_tolower

Allocation:
ft_calloc, ft_strdup

All functions strictly follow the behavior described in the official man pages.

---

### Part 2 – Additional Functions

Utility functions not included in libc:

ft_substr  
ft_strjoin  
ft_strtrim  
ft_split  
ft_itoa  
ft_strmapi  
ft_striteri  
ft_putchar_fd  
ft_putstr_fd  
ft_putendl_fd  
ft_putnbr_fd  

These functions focus on dynamic memory allocation and string manipulation.

---

### Part 3 – Linked List Functions

Implementation of a singly linked list using the following structure:

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

Functions implemented:

ft_lstnew  
ft_lstadd_front  
ft_lstsize  
ft_lstlast  
ft_lstadd_back  
ft_lstdelone  
ft_lstclear  
ft_lstiter  
ft_lstmap  

This part reinforces understanding of:
- Dynamic memory allocation
- Double pointers
- Function pointers
- Memory safety

---

## Technical Constraints

- No global variables
- No memory leaks
- All files compiled with -Wall -Wextra -Werror
- Library created at the root of the repository
- Only allowed external functions were used (malloc, free, write)

---

## Resources

- Official Linux man pages
- GNU C Library documentation
- 42 Libft subject PDF

**AI Usage:** AI tools were used only for concept clarification and logical verification. Also used to visualize the logic of Part 3 (Linked Lists), specifically the impact of double pointers (`**lst`) and memory management in `ft_lstmap`. All functions were implemented, tested, and debugged manually.