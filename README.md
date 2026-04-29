_This project has been created as part of the 42 curriculum by npaulo_

# *libft*

### Description

**libft** library, is the first challenge at 42. It's designed to help our understanding on C programming by recreating main functions from the standard C library _(libc)_ and creating additional functions for usual tasks.
This project follows **The Norm** (42's coding standard). Key technical aspects including:<br>
 &nbsp; &nbsp; 1.) **Memory Management**, protecting against allocation failures to prevent segmentation faults<br>
 &nbsp; &nbsp; 2.) **Static Library**, compiling into a static library file (_`.a`_), allowing it to be easily linked to other C projects by including the _`libft.h`_ header.<br>
 &nbsp; &nbsp; 3.) **Code Integrity**, creating a `Makefile` with flags `-Wall -Wextra -Werror` to ensure the code is robust and free of warnings.
  
###  Overview
The project is divided into three main parts:<br/>

**`Part one`** &nbsp; &nbsp; &nbsp; - **Libc Functions:** Faithful re-creation of standard functions using the originals prototypes, the same behaviors and definitions in the **`man`** page, only adding the prefix `'ft_'` to each one:
> ft_isalpha _(isalpha)_, ft_isdigit _(isdigit)_, ft_isalnum _(isalnum)_, ft_isascii _(isascii)_, ft_isprint _(isprint)_, ft_strlen _(strlen)_, ft_strlcpy _(strlcpy)_, ft_strlcat _(strlcat)_, ft_strncmp _(strncmp)_, ft_toupper _(toupper)_, ft_tolower _(tolower)_, ft_atoi _(atoi)_, ft_strchr _(strchr)_, ft_strrchr _(strrchr)_, ft_strnstr _(strnstr)_, ft_memset _(memset)_, ft_memcpy _(memcpy)_, ft_memmove _(memmove)_, ft_memchr _(memchr)_, ft_memcmp _(memcmp)_, ft_bzero _(bzero)_, ft_calloc _(calloc)_ and ft_strdup _(strdup)_.

**`Part two`** &nbsp; &nbsp; &nbsp; - **Additional Functions:** High-level utilities for string manipulation and memory allocation, such as:
> ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri, ft_putchar_fd, ft_putstr_fd, ft_putendl_fd and ft_putnbr_fd.

**`Part three`** - **Linked list:** A set of useful functions dedicated to manipulate memory and strings, providing tools to create, add, remove, and iterate through nodes efficiently.
>ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back,ft_lstdelone, ft_lstclear. ft_lstiter and ft_lstmap.

### Instructions
To compile, the project, use the provided Makefile.
Open the terminal and run:
```bash
make            # Compiles everything
```
In case of error, please use the following commands:
```bash
make clean      # Removes all object files '*.o'
make fclean     # Removes all object files and the binary library 'libft.a'
make re         # Recompules everything
```

## Resources

### References
- Pear to pear colleages.
- [w3schools.com](https://www.w3schools.com/c/index.php) - For understanding the behavior of standard functions.
- [man7.org](https://man7.org/index.html) - For understanding the behavior of standard functions.
- `man` pages: Used extensively via the terminal (e.g., `man strlen`) to verify edge cases and return values.

### AI Usage
AI tools (Google AI/Claude/Copilot) were used in this project for the following tasks:
- **Conceptual Clarification**: Explaining some complex functions, for better understanding of logic and functionalities.
- **Documentation**: Assisting in the structure and translation of this README.md file.
