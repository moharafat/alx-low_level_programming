void print_all(const char * const format, ...)
{
    va_list ptr;
    unsigned int i;

    va_start(ptr, format);

    while (*format != '\0')
    {
        char type = *format;

        switch (type)
        {
            case 'c':
                printf("%c", va_arg(ptr, int)); // char is promoted to int in varargs
                break;
            case 'i':
                printf("%d", va_arg(ptr, int));
                break;
            case 'f':
                printf("%f", va_arg(ptr, double)); // float is promoted to double in varargs
                break;
            case 's':
                {
                    char *str = va_arg(ptr, char *);
                    if (str == NULL)
                        printf("(nil)");
                    else
                        printf("%s", str);
                    break;
                }
            default:
                break;
        }

        if (*(format + 1) != '\0') // Check if not the last character in the format string
            printf(", "); // Print a comma and space to separate values

        format++;
    }
    va_end(ptr);
    printf("\n");
}
