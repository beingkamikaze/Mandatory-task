cpp program for checking a given number is prime not using three different functions with different time complexities

1.Naive Method [isPrime1()]
In this Method we simply use the basic concept of prime number ie., a number that is divisible only by itself and 1.
Time compelxity of this Method is O(n).

2.Efficient Method [isPrime2()]
In this method, By checking if n%2==0 or n%3==0 (then the given number is not prime), we can save many iteration.
Time compelxity of this Method is less than O(n).

3.More efficient Method [isPrime3()]
In this Method we use Idea of, Divisor always appears in pair ie.,
for eg., 30: (1,30),(2,15),(3,10),(5,6)

If (x,y) is a pair and x*y=n
and if x<=y then,
x*x<=n
x<=sqrt(n);

Time Complexity of this Method is less than O(sqrt(n))
