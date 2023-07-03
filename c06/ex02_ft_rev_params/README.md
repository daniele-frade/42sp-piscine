# Exercise 02: ft_rev_params

### Create a program that displays its given arguments.
<br>

- We’re dealing with a program here, you should therefore have a function main in your .c file.

- One per line, in the reverse order of the command line.

- It should display all arguments, except for argv[0].

- Example:
```
$>./a.out test1 test2 test3 | cat -e
test3$
test2$
test1$
$>
```

- Allowed functions:
```
write
```