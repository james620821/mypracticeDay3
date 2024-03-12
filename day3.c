#include <stdio.h>
int main()
{
    // 3>2>1 True or False? A:False, パオ耞3>2-->1 then 1>1-->Flase (紇3-4)
    // 3>2 and 2>1 -->璝稱ノand惠#include <iso646.h>
    // 盽ノ&&τぃ琌and
    // 呸胯笲衡(&& ||)穦Τshort circuit evaluation (紇3-5)

    //紇4-3絤策{骸肂чΙ絤策}
    /*
    int people;
    double cost;
    printf("How many people are there at a table? ");
    scanf("%d", &people);
    cost = people * 300;
    if (cost >= 3000)
    {
        cost = cost * 0.8;
    }
    printf("The tatal cost is %f\n", cost);
    */
    //紇4-4絤策{タà耞絤策}
    /*
    int side1, side2, side3;
    printf("Please enter the lengths: ");
    //scanf("%d%d%d", &side1, &side2, &side3);
    scanf("%d",&side1);
    scanf("%d",&side2);
    scanf("%d",&side3);
    if ((side1 == side2) && (side2 == side3))
    {
        printf("Regular triangle\n");
    }
    */
    //紇4-5絤策{单竬à耞絤策}
    /*
    int side1, side2, side3;
    printf("Please enter the lengths: ");
    scanf("%d%d%d", &side1, &side2, &side3);
    if ((side1 == side2) || (side2 == side3) || (side1 == side3))
    {
        printf("Isosceles triangle\n");
    }
    */
    /*
    //紇4-6絤策{àà耞絤策}
    int side1, side2, side3;
    int temp;
    printf("Please enter the lengths: ");
    scanf("%d%d%d", &side1, &side2, &side3);
    //side1 =side1*side1;
    //printf("%d",side1);
    if ((side2 - side1)>0 && (side2 - side3)>0)
    {
        temp = side1;
        side1 = side2;
        side2 = temp;
    }
    if ((side3 -side2) >0 && (side3 - side1)>0)
    {
        temp = side1;
        side1 = side3;
        side3 = temp;
    }
    if (side1*side1 == (side2*side2 + side3*side3))
    {
        printf("Rectangular triangle\n");
    }
    */

    return 0;
}
