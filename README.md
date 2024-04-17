# LIBFT

> The goal of this project is to create a C library that consolidates common functions. This library can then be utilized in all your future projects.
> 

<img width="1282" alt="Screenshot 2567-04-17 at 22 55 52" src="https://github.com/Tisarji/libft-42cursus/assets/48820052/a0f0c87d-05a7-435e-8776-17fefdb16ab3">


# **📑 Functions List**

## **Functions from the `<ctype.h>` library**

- `ft_isascii` - Tests for an ASCII character.
- `ft_isalnum` - Tests for an alphanumeric character.
- `ft_isalpha` - Tests for an alphabetic character.
- `ft_isdigit` - Tests for a decimal-digit character.
- `ft_isprint` - Tests for a printing character (including space character).
- `ft_tolower` - Converts upper case to lower case letters.
- `ft_toupper` - Converts lower case to upper case letters.

## **Functions from the `<stdlib.h>` library**

- `ft_atoi` - Converts an ASCII string to an integer.
- `ft_calloc` - Allocates memory.

## **Functions from the `<strings.h>` library**

- `ft_bzero` - Writes zeroes to a byte string.
- `ft_memset` - Writes a byte to a byte string.
- `ft_memchr` - Locates a byte in a byte string.
- `ft_memcmp` - Compares byte strings.
- `ft_memmove` - Copies a byte string.
- `ft_memcpy` - Copies a memory area.

## **Functions from the `<string.h>` library**

- `ft_strlen` - Finds the length of a string.
- `ft_strchr` - Locates the first occurrence of a character in a string.
- `ft_strrchr` - Locates the last occurrence of a character in a string.
- `ft_strnstr` - Locates a substring in a string (size-bounded).
- `ft_strncmp` - Compares strings (size-bounded).
- `ft_strdup` - Saves a copy of a string (with malloc).
- `ft_strlcpy` - Copies a string within size limit.
- `ft_strlcat` - Concatenates strings within size limit.

## **Non-standard functions**

- `ft_putchar_fd` - Outputs a character to a given file.
- `ft_putstr_fd` - Outputs a string to a given file.
- `ft_putendl_fd` - Outputs a string to a given file with a newline.
- `ft_putnbr_fd` - Outputs an integer to a given file.
- `ft_itoa` - Converts an integer to an ASCII string.
- `ft_substr` - Extracts a substring from a string.
- `ft_strtrim` - Trims the beginning and end of a string with specified characters.
- `ft_strjoin` - Concatenates two strings into a new string (with malloc).
- `ft_split` - Splits a string, with a specified character as delimiter, into an array of strings.
- `ft_strmapi` - Creates a new string by modifying a string with a specified function.
- `ft_striteri` - Applies a specific function to each character of a string.

## **Linked list functions**

- `ft_lstnew` - Creates a new list.
- `ft_lstsize` - Counts the elements of a list.
- `ft_lstlast` - Finds the last element of a list.
- `ft_lstadd_back` - Adds a new element at the end of a list.
- `ft_lstadd_front` - Adds a new element at the beginning of a list.
- `ft_lstdelone` - Deletes an element from a list.
- `ft_lstclear` - Deletes a sequence of elements from a list, starting from a certain point.
- `ft_lstiter` - Applies a function to the content of all list elements.
- `ft_lstmap` - Applies a function to the content of all list elements, resulting in a new list.
