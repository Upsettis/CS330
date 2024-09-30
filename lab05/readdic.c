#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

void list_directory(const char *path) {
    struct dirent *dirent;
    DIR *parentDir = opendir(path);

    if (parentDir == NULL) {
        printf("Error opening '%s'\n", path);
        return;
    }
    int i = 1;
    while ((dirent = readdir(parentDir)) != NULL) {
        // this skips . and ..(found on stack overflow)
        if (strcmp(dirent->d_name, ".") == 0 || strcmp(dirent->d_name, "..") == 0) {
            continue;
        }
        printf("[%d] %s/%s\n", i, path, dirent->d_name);
        i++;
        if (dirent->d_type == DT_DIR) {
            char new_path[1024];
            snprintf(new_path, sizeof(new_path), "%s/%s", path, dirent->d_name);
            list_directory(new_path);
        }
    }
    closedir(parentDir);
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s <dirname>\n", argv[0]);
        exit(-1);
    }

    list_directory(argv[1]);
    return 0;
}
