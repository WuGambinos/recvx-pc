#include "afs.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include <string.h>

typedef struct {
    int length;
    int offset;
} AFS_Entry;

typedef struct {
    char id[4]; 
    int num_files;
} AFS_HEADER;

void print_afs_header(AFS_HEADER* hd)
{
    printf("ID: %s NUM_FILES: %d\n", hd->id, hd->num_files);
}

void print_afs_entry(AFS_Entry* afs)
{
    printf("OFFSET: %d HEX: 0x%X\n", afs->offset, afs->offset);
    printf("length: %d\n", afs->length);
}

int read_afs(char* path)
{
    printf("READING FILE: %s\n", path);

    FILE* f;
    f = fopen(path, "rb");

    if (f == NULL) {
        printf("%s could not be opened", path);
        return 1;
    }

    fseek(f, 0L, SEEK_END);
    int fsize = ftell(f);
    fseek(f, 0L, SEEK_SET);

    uint32_t* buffer = (uint32_t*) malloc(fsize);
    fread(buffer, fsize, 1, f);
    fclose(f);

    AFS_HEADER hd;

    memcpy(&hd, buffer, sizeof(AFS_HEADER));
    print_afs_header(&hd);

    int i = 2;
    while (i < (2 * (hd.num_files + 1))) {
        AFS_Entry temp;
        temp.offset = buffer[i++];
        temp.length = buffer[i++];
        printf("NUM: %d\n", (i - 2) / 2);
        print_afs_entry(&temp);
        printf("\n");
    }
}
