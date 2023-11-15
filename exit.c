

void _exit(char **arr, int status, int i, char *program_name)
{
    if (strcmp(arr[i], "exit") == 0)
    {
        printf("%s: %s\n", program_name, "exiting");
        exit(0);
    }
}
