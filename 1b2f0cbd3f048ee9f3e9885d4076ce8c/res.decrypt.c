#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if (argc != 3) {
        printf("Usage: %s FILEIN FILEOUT\n", argv[0]);
        exit(1);
    }
    FILE *filein = fopen(argv[1], "r");
    if (!filein) {
        perror("FILEIN");
        exit(2);
    }
    FILE *fileout = fopen(argv[2], "w");
    if (!fileout) {
        perror("FILEOUT");
        exit(2);
    }
    unsigned char c;
    while (!feof(filein)) {
        if (!fread(&c, 1, 1, filein)) {
            break;
        }
        c += 0x17;
        c ^= 0x94;
        c += 0x7D;
        if (fwrite(&c, 1, 1, fileout) < 1) {
            break;
        }
    }
    fclose(filein);
    fclose(fileout);
    return 0;
}
