
#include<stdio.h>

void main()
{
    test_comma();
    printf("testing other doubts\n");
    random_question();
    printf("program ran successfully\n");
}

/*
    comma as an operator
    1 - without the paranthesis it will give compilation error;
    2 - evaluate the first one ignore it and return the second one;
*/
void test_comma()
{
    int i = (10, 5);
    int j = (10, 5, 6);
    int k = (10, 5, 6, -1);
    int l = (printf("k is %d\n", k), 5, 6, -1);

    int m = (f1(), f2());
    int n = ((f1(), f2()), f3());

    printf("i = %d j =%d k =%d\n", i, j, k);
    printf("m =%d\n", m);
    printf("n =%d\n", n);

    /*trying out geeks-for-geeks questions now*/
    printf("/*trying out geeks-for-geeks questions now*/\n");
    geek_for_geek_q10(); //
    geek_for_geek_q11();
    geek_for_geek_q20(); //
    geek_for_geek_q30(); //
}

int f1()
{
    printf("f1\n");
    return 1;
}

int f2()
{
    printf("f2\n");
    return 2;
}

int f3()
{
    printf("f3\n");
    return 3;
}

int geek_for_geek_q10()
{
   int x = 10;
   int y = (x++, ++x);
   printf("%d\n", y);
   //getchar();
   return 0;
}

int geek_for_geek_q11()
{
   int x = 10;
   int y = (x++, ++x, x++);
   printf("%d  %d\n", y, x);
   //getchar();
   return 0;
}

int geek_for_geek_q20()
{
   int x = 10;
   int y = 15;

   printf("%d\n", (x, y));
   //getchar();
   return 0;
}

int geek_for_geek_q30()
{
    int x = 10, y;

    // The following is equavalent to y = x++
    y = (x++, printf("x = %d\n", x), ++x, printf("x = %d\n", x), x++);

    // Note that last expression is evaluated
    // but side effect is not updated to y
    printf("y = %d\n", y);
    printf("x = %d\n", x);

    return 0;
}

int random_question()
{
    int i = 5;
    int ii = 5;
    int j = 4;
    int k = 9;
    int l = 10;
    int m = 10;
    int n = 10;
    int p = 10;
    printf("i = %d  i = %d  i = %d  i = %d i = %d\n",i++, ++i, i++, ++i, i);
    printf("ii = %d  ii = %d  ii = %d  ii = %d ii = %d\n",ii, ++ii, ii++, ++ii, ++ii);
    printf("k = %d  k = %d  k = %d  k = %d k = %d\n",k++, k++, k++, k++, k);
    printf("l = %d  l = %d  l = %d  l = %d l = %d l = %d  l = %d  l = %d  l = %d\n",l++, l++, l++, l++, l++, l++, l++, l++, l++);
    printf("m = %d  m = %d  m = %d  m = %d m = %d m = %d  m = %d  m = %d  m = %d\n",m++, m++, m++, m++, m++, m++, m++, m++, m);
    printf("n = %d  n = %d  n = %d  n = %d n = %d n = %d  n = %d  n = %d  n = %d\n",n  , n++, n++, n++, n++, n++, n++, n++, n + 1);
    printf("p = %d  p = %d  p = %d  p = %d p = %d p = %d  p = %d  p = %d  p = %d\n",p  , ++p, ++p, ++p, ++p, ++p, ++p, ++p, p + 1);
    printf("j = %d  j = %d \n",j++, j);
    printf("j = %d  j = %d \n",++j, j);
    printf("i = %d\n",i);
}
