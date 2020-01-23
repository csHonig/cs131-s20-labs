/**
 * NOTE: You do not need to worry about what this file is doing for now
 *       but if you are curious read on!
 *
 * This file is a "header" file.
 *
 * The statement below is called a forward declaration. This is when you declare
 * the existence of a function or struct without actually implementing it. When
 * a file has forward-declared a function or struct, it can use it as if it was
 * implemented in this file. This is roughly equivalent to just saying that this
 * function exists *somewhere* in the source/library files being compiled with
 * this program.
 *
 * In the compilation process, the compiler will make a so-called "symbol" for
 * every function that is declared (but not necessarily implemented) and later,
 * the linker will look for an implementation of that symbol and point all of
 * the references of that symbol to that implementation. You will learn more
 * about this in the next lab.
 *
 * This is what enables library function shared across files. For example,
 * multiple files in a single compilation process can #include this header and
 * that will put this line at the top of the file before compilation. Thus,
 * multiple files can use a function without having to re-implement it.
 *
 * Declaring a symbol multiple times is fine, but each symbol can only be
 * *defined* (i.e., supplied with a definition, which for a function is an
 * implementation) only once. If a symbols is defined more than once, you
 * will get a compiler error.
 *
 * For below, all we need is one file to implement a function of the same name
 * and type signature and the linker will be able to fix everyone up so their
 * function calls work!
 *
 * More on this process in Lab 2...
 */
char* my_strtok(char* str, const char* delim);
