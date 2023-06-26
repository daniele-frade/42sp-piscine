# Exercise 12: ft_print_memory

### Create a function that displays the memory area onscreen.
<br>

- The display of this memory area should be split into three "columns" separated by
a space:
	- The hexadecimal address of the first line’s first character followed by a ’:’.
	- The content in hexadecimal with a space each 2 characters and should be padded with spaces if needed (see the example below).
	- The content in printable characters.

- If a character is non-printable, it’ll be replaced by a dot.

- Each line should handle sixteen characters.

- If size is equal to 0, nothing should be displayed.

- Allowed functions:
```
write
```