# Exercise 11: ft_putstr_non_printable

### Create a function that displays a string of characters onscreen. If this string con- tains characters that aren’t printable, they’ll have to be displayed in the shape of hexadecimals (lowercase), preceeded by a "backslash".
<br>

- For example:
	- before: `"Coucou\ntu vas bien ?"`
	- after: `"Coucou\0atu vas bien ?"`

- Allowed functions:
```
write
```

- Prototype: 
```
void ft_putstr_non_printable(char *str)
```
