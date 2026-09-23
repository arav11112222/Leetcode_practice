#define SIZE 100003

typedef struct {
    long long key;
    int value;
    int used;
} Hash;

int hashIndex(long long key) {
    long long x = key % SIZE;
    if (x < 0)
        x += SIZE;
    return x;
}

int subarraySum(int* nums, int numsSize, int k) {
    Hash table[SIZE] = {0};

    long long prefix = 0;
    int count = 0;

    int index = hashIndex(0);
    table[index].key = 0;
    table[index].value = 1;
    table[index].used = 1;

    for (int i = 0; i < numsSize; i++) {
        prefix += nums[i];

        long long needed = prefix - k;
        index = hashIndex(needed);

        while (table[index].used) {
            if (table[index].key == needed) {
                count += table[index].value;
                break;
            }

            index = (index + 1) % SIZE;
        }

        index = hashIndex(prefix);

        while (table[index].used) {
            if (table[index].key == prefix) {
                table[index].value++;
                break;
            }

            index = (index + 1) % SIZE;
        }

        if (!table[index].used) {
            table[index].key = prefix;
            table[index].value = 1;
            table[index].used = 1;
        }
    }

    return count;
}