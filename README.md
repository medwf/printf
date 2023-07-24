# printf

int printf ( const char * format, ... );

Print formatted data to stdout

Writes the C string pointed by _format_ to the standard output ([stdout](https://cplusplus.com/stdout)). If _format_ includes _format specifiers_ (subsequences beginning with %), the additional arguments following _format_ are formatted and inserted in the resulting string replacing their respective specifiers.

### Parameters

format

C string that contains the text to be written to [stdout](https://cplusplus.com/stdout).
It can optionally contain embedded _format specifiers_ that are replaced by the values specified in subsequent additional arguments and formatted as requested.
A _format specifier_ follows this prototype:
- %[flags][width][.precision][length]specifier]
Where the _specifier character_ at the end is the most significant component, since it defines the type and the interpretation of its corresponding argument:

|_specifier_|Output|Example|
|---|---|---|
|d _or_ i|Signed decimal integer|392|
|u|Unsigned decimal integer|7235|
|o|Unsigned octal|610|
|x|Unsigned hexadecimal integer|7fa|
|X|Unsigned hexadecimal integer (uppercase)|7FA|
|f|Decimal floating point, lowercase|392.65|
|F|Decimal floating point, uppercase|392.65|
|e|Scientific notation (mantissa/exponent), lowercase|3.9265e+2|
|E|Scientific notation (mantissa/exponent), uppercase|3.9265E+2|
|g|Use the shortest representation: %e or %f|392.65|
|G|Use the shortest representation: %E or %F|392.65|
|a|Hexadecimal floating point, lowercase|-0xc.90fep-2|
|A|Hexadecimal floating point, uppercase|-0XC.90FEP-2|
|c|Character|a|
|s|String of characters|sample|
|p|Pointer address|b8000000|
|n|Nothing printed.  <br>The corresponding argument must be a pointer to a signed int.  <br>The number of characters written so far is stored in the pointed location.||
|%|A % followed by another % character will write a single % to the stream.|%|
