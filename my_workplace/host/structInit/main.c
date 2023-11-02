#include <stdint.h>
#include <stdio.h>

struct CarModel
{
    uint32_t  carNumber;
    uint32_t carPrice;
    uint16_t carMaxSpeed;
    float    carWeight;
};

int main(void)
{
    struct CarModel carBMW = {2021, 15000, 220, 1330};
    printf("Sizeof of struct CarModel is %zu\n", sizeof(struct CarModel));
    getchar();
    return 0;
}
