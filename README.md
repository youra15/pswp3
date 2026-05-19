````md
# Push_swap

> This activity has been created as part of the 42 curriculum by <rchavast> and <yasser>

## Description

Push_swap is an algorithmic sorting project from the 42 School curriculum.

The goal of this project is to sort a list of integers using two stacks (`a` and `b`) and a limited set of allowed operations while generating the smallest possible number of instructions.

This project focuses on algorithmic complexity, optimization, data structures, sorting strategies, stack manipulation, and computational thinking.

The program analyzes the input and outputs a valid sequence of operations capable of sorting the stack in ascending order.

---

## Allowed Operations

### Swap

| Instruction | Description |
|---|---|
| `sa` | Swap the first two elements of stack `a` |
| `sb` | Swap the first two elements of stack `b` |
| `ss` | `sa` and `sb` at the same time |

### Push

| Instruction | Description |
|---|---|
| `pa` | Push the top element from `b` to `a` |
| `pb` | Push the top element from `a` to `b` |

### Rotate

| Instruction | Description |
|---|---|
| `ra` | Shift up all elements of stack `a` by 1 |
| `rb` | Shift up all elements of stack `b` by 1 |
| `rr` | `ra` and `rb` at the same time |

### Reverse Rotate

| Instruction | Description |
|---|---|
| `rra` | Shift down all elements of stack `a` by 1 |
| `rrb` | Shift down all elements of stack `b` by 1 |
| `rrr` | `rra` and `rrb` at the same time |

---

## Sorting Strategy

This implementation uses:

- Dedicated sorting for small stacks (`2`, `3`, and `5` numbers)
- Binary Radix Sort for larger datasets

The radix approach provides reliable and efficient performance while remaining fully compliant with the project constraints.

---

## Performance

| Numbers | Operations |
|---|---|
| 3 | ≤ 3 |
| 5 | ≤ 12 |
| 100 | ~700–1100 |
| 500 | ~5500–7000 |

---

## Compilation

```bash
make
````

Available rules:

```bash
make
make clean
make fclean
make re
```

---

## Usage

```bash
./push_swap 4 67 3 87 23
```

The program outputs the list of operations required to sort the stack.

---

## Error Handling

The program displays:

```txt
Error
```

when:

* invalid arguments are provided
* duplicate numbers are detected
* integers exceed valid limits
* parsing fails

---

## Project Structure

```txt
.
├── Makefile
├── push_swap.h
├── main.c
├── parsing.c
├── errors.c
├── free.c
├── init_stack.c
├── stack_utils.c
├── stack_utils2.c
├── sa_sb_ss.c
├── pa_pb.c
├── ra_rb_rr.c
├── rra_rrb_rrr.c
├── small_sort.c
├── radix_sort.c
└── utils.c
```

---

## Learning Outcomes

Through this project, we learned:

* Stack manipulation
* Sorting optimization
* Complexity analysis
* Efficient data handling in C
* Writing clean and modular code
* Performance-oriented programming

---

## Resources

* 42 Push_swap subject
* Linux man pages
* Big-O complexity documentation
* Radix sort documentation

---

## Notes

This project was developed in accordance with the 42 School Norm and compiled using:

```bash
-Wall -Wextra -Werror
```

```
```
