### Pseudo Code - Recursive(Fails for Negative value)

#### Time Complexity T = O(n)

#### Space Complexity S = O(1)

```python
power(x, y):
 
    if (y == 0): 
      return 1
    
    else if (y % 2) == 0):
        return (power(x, (y / 2)) * power(x, (y / 2)))
    
    else:
        return (x * power(x, (y / 2)) * power(x, (y / 2)))
```

### Pseudo Code - Divide and conquer(Optimised)

#### Time Complexity T = O(log (base)2 (n))

#### Space Complexity S = O(1)

```python

power(x,y):
  
  ans = 1;
  
  if(y % 2 == 0):
    x *= x;
    n /= 2;
  
  else:
    ans = ans * x;
    n = n - 1;
 
``` 
  
