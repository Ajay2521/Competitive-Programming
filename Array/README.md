### Array

- array is a **collection of items** stored at **contiguous memory locations**
- store multiple items of the **same type together**.
- makes it easier to **calculate the position** of each element by simply **adding an offset to a base value**
- **base value is index 0** and the difference between the two indexes is the **offset**
- Each element can be uniquely **identified by its index** in the array 
- array has a **fixed size** meaning once the size is given to it, it cannot be changed

#### Types of indexing in an array:

- **0 (zero-based indexing):** The first element of the array is **indexed by a subscript of 0.**
- **1 (one-based indexing):** The first element of the array is **indexed by a subscript of 1**.
- **n (n-based indexing):** The base index of an array can be freely chosen

#### Advantage of Array:

- allow **random access** to elements
- better cache locality that makes a pretty big difference in performance
- represent multiple data items of the same type using a single name.

#### Disadvantage of Array:

- can’t change the size
- shifting operation is costly too

#### Applications

- stores data elements of the same data type
- used for CPU scheduling
- Used to Implement other data structures like Stacks, Queues, Heaps, Hash tables, etc.

#### Syntax

```
datatype variable_name [array_aize] = {array_values}
```



