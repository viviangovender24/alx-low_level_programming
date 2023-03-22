#0x0F-function_pointers
  * [function_pointers.h] - header file
  * [0-print_name.c] : C function that prints a name.

  * [1-array_iterator.c] : C function that executes a function given
  as a parameter on each element of an array.

  * [2-int_index.c] : C function that searches for an integer.
    * Returns the index of the first element for which the `cmp` function does not return `0`.
    * If no element is matched or `size` <= 0, the function returns `-1`.

  * [3-calc.h] - header file for [3-main.c], [3-op_functions.c]and [3-get_op_func.c].

  * [3-op_functions.c]: File containing the following func.
    * `op_add`: Returns the sum of `a` and `b`.
    * `op_sub`: Returns the difference of `a` and `b`.
    * `op_mul`: Returns the product of `a` and `b`.
    * `op_div`: Returns the division of `a` by `b`.
    * `op_mod`: Returns the remainder of the division of `a` by `b`.

  * [3-get_op_func.c]: C function that selects the correct function
  from `3-op_functions.c` to perform the operation asked by the user.
    * If the operator argument `s` does not match any of the five expected operators
    (`+`, `-`, `*`, `/`, `%`), the function returns `NULL`.

  * [3-main.c]: C program that performs simple mathematical operations.
