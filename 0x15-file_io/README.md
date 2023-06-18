# 0x15 - File I/O

## Synopsis

This project covers basic input / output operations in the C programming language

## File Descriptions

### Mandatory

- `0-read_textfile.c`: This file contains a function that reads a text file and prints it to the POSIX standard output. The function takes the filename and the number of letters it should read and print. It returns the actual number of letters it could read and print.

- `1-create_file.c`: This file contains a function that creates a file. The function takes a filename and a text content to write to the file. If the file already exists, it truncates it. If the file does not exist, it creates it with permissions `rw-------`. If the function fails, it returns `-1`. Otherwise, it returns `1`.

- `2-append_text_to_file.c`: This file contains a function that appends text at the end of a file. The function takes a filename and a text content to append. If the file does not exist, or the function fails, it returns `-1`. If the file exists, and the operation is successful, it returns `1`.

- `3-cp.c`: This file contains a function that copies the content of a file to another file. The function takes two filenames as arguments. If the function fails, or if it cannot close a file descriptor, it exits with status `100`.

## Author

Chris Stamper - [ZeroDayPoke](https://github.com/ZeroDayPoke)
