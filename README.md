# Binary Trees

*Not to be confused with Binary search tree, B-tree, or B+ tree.*

In computer science, a binary tree is a tree data structure in which each node has **at most two children**, referred to as the **left child and the right child**. That is, it is a k-ary tree with k = 2. A recursive definition using set theory is that a binary tree is a tuple (L, S, R), where L and R are binary trees or the empty set and S is a singleton set containing the root.

![BT](https://upload.wikimedia.org/wikipedia/commons/thumb/5/5e/Binary_tree_v2.svg/220px-Binary_tree_v2.svg.png)
```A labeled binary tree of size 9 (the number of nodes in the tree) and height 3 (the height of a tree defined as the number of edges or links from the top-most or root node to the farthest leaf node), with a root node whose value is 1. The above tree is unbalanced and not sorted.```

It is also possible to interpret a binary tree as an **undirected**, rather than directed graph, in which case a binary tree is an **ordered, rooted tree**.

In computing, binary trees can be used in two very different ways:

* First, as a means of accessing nodes based on some value or label associated with each node. Binary trees labelled this way are used to implement **binary search trees and binary heaps**, and are used for efficient **searching and sorting**. The **designation of non-root nodes as left or right child even when there is only one child** present matters in some of these applications, in particular, it is significant in **binary search trees**. However, the arrangement of particular nodes into the tree is not part of the conceptual information. For example, in a normal binary search tree the placement of nodes depends almost entirely on the **order in which they were added**, and can be re-arranged (for example by balancing) without changing the meaning.

* Second, as a **representation of data** with a relevant bifurcating structure. In such cases, the particular arrangement of nodes under and/or to the left or right of other nodes is part of the information (that is, changing it would change the meaning). Common examples occur with Huffman coding and cladograms. The everyday division of documents into chapters, sections, paragraphs, and so on is an analogous example with n-ary rather than binary trees.

## Defining binary trees using graph theory concepts

A binary tree is a **rooted tree** that is also an **ordered tree** (a.k.a. *plane tree*) in which every node has at most two children. A rooted tree naturally imparts a notion of levels (distance from the root), thus for every node a notion of children may be defined as the nodes connected to it a level below. Ordering of these children (e.g., by drawing them on a plane) makes it possible to distinguish a left child from a right child. But this still doesn't distinguish between a node with left but not a right child from a one with right but no left child. A more informal way of making the distinction is to say, quoting the Encyclopedia of Mathematics, that "every node has a left child, a right child, neither, or both" and to specify that these "are all different" binary trees.

## Types of binary trees

* A **rooted** binary tree has a root node and every node has at most two children.

* A **full** binary tree (sometimes referred to as a **proper**, **plane**, or **strict** binary tree) is a tree in which every node has **either 0 or 2 children**. Another way of defining a full binary tree is a **recursive definition** (*look that one up separately*). A full binary tree is either:

    * A single vertex (a single node as the root node).

    * A tree whose root node has two subtrees, both of which are full binary trees.

![full BT](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b0/Full_binary.svg/220px-Full_binary.svg.png)```a full binary tree```

* A **perfect** binary tree is a binary tree in which **all interior nodes have two children and all leaves have the same depth or same level** (the level of a node defined as the number of edges or links from the root node to a node). **A perfect binary tree is a full binary tree.**

![perfectBT](https://upload.wikimedia.org/wikipedia/commons/thumb/2/26/Waldburg_Ahnentafel.jpg/220px-Waldburg_Ahnentafel.jpg)

```An ancestry chart which can be mapped to a perfect 4-level binary tree.```

* A **complete** binary tree is a binary tree in which **every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible**. It can have between *1* and *2h* nodes at the last level *h*. **A perfect tree is therefore always complete but a complete tree is not always perfect.** Some authors use the term complete to refer instead to a perfect binary tree as defined above, in which case they call this type of tree (with a possibly not filled last level) an *almost complete* binary tree or *nearly complete* binary tree. **A complete binary tree can be efficiently represented using an array.**

![completeBT](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d9/Complete_binary2.svg/220px-Complete_binary2.svg.png)

```A complete binary tree (that is not full)```

* In the **infinite complete** binary tree is a tree with **ℵ0 levels**, where for each level *d* the **number of existing nodes at level *d* is equal to *2d***. The cardinal number of the set of all levels is ℵ0 (countably infinite). The cardinal number of the set of all paths (the "leaves", so to speak) is uncountable, having the cardinality of the continuum (*definitely do your search on that one*)

* A **balanced** binary tree is a binary tree structure in which **the left and right subtrees of every node differ in height (the number of edges from the top-most node to the farthest node in a subtree) by no more than 1**. One may also consider binary trees where no leaf is much farther away from the root than any other leaf. (Different balancing schemes allow different definitions of "much farther".)

* A **degenerate** (or **pathological**) tree is where **each parent node has only one associated child node**. This means that the tree will behave like a **linked list data structure** (*i swear i thought so before reading it. i'm a genius hehe*). In this case, an advantage of using a binary tree is **significantly reduced** because it is essentially a linked list which time complexity is **O(n)** (n as the number of nodes) and it has **more data space than the linked list** due to **two pointers per node**, while the complexity of **O(log2n) for data search in a balanced binary tree** is normally expected.

## Properties of binary trees

* The number of nodes $\{n}$ in a full binary tree is at least $\{\displaystyle 2h+1}$ and at most $\{\displaystyle 2^{h+1}-1}$ **(i.e., the number of nodes in a perfect binary tree)**, where ℎ is the height of the tree. A tree consisting of only a root node has a height of 0. The least number of nodes is obtained by adding only two children nodes per adding height so $\{\displaystyle 2h+1}$ (1 for counting the root node). The maximum number of nodes is obtained by fully filling nodes at each level, i.e., **it is a perfect tree**. For a perfect tree, the number of nodes is $\{\displaystyle 1+2+4+\ldots +2^{h}=2^{h+1}-1}$, where the last equality is from the **geometric series sum**.

* The number of leaf nodes $\{l}$ in a perfect binary tree is $\{\displaystyle l={n+1}/2}$ (where n is the number of nodes in the tree) because $\{\displaystyle n={{2}^{h+1}}-1}$ (by using the above property) and the number of leaves is $\{\displaystyle 2^{h}}$ so $\{\displaystyle n=2\cdot {{2}^{h}}-1=2l-1\to l=\left(n+1\right)/2}$. It also means that $\{\displaystyle {n}={2l-1}}$ . In terms of the tree height $\{\displaystyle l=(2^{h+1}-1+1)/2=2^{h}}$.

* For any non-empty binary tree with $\{\displaystyle l}$ leaf nodes and $\{\displaystyle i_{2}}$ nodes of degree 2 (internal nodes with two child nodes), $\{\displaystyle l=i_{2}+1}$.

* The proof is the following. For a perfect binary tree, the total number of nodes is $\{\displaystyle n=2^{h+1}-1}$ (A perfect binary tree is a full binary tree.) and $\{\displaystyle l=2^{h}}$, so $\{\displaystyle i=n-l=(2^{h+1}-1)-2^{h}=2^{h}-1=l-1\to l=i+1}$. To make a full binary tree from a perfect binary tree, a pair of two sibling nodes are removed one by one. This results in "two leaf nodes removed" and "one internal node removed" and "the removed internal node becoming a leaf node", so one leaf node and one internal node is removed per removing two sibling nodes. As a result, $\{\displaystyle l=i+1}$ also holds for a full binary tree. To make a binary tree with a leaf node without its sibling, a single leaf node is removed from a full binary tree, then "one leaf node removed" and "one internal nodes with two children removed" so $\{\displaystyle l=i+1}$ also holds. This relation now covers all non-empty binary trees.

* With given $\{\displaystyle n}$ nodes, the minimum possible tree height is $\{\displaystyle h_{min}=\log _{2}(n+1)-1}$ with which the tree is a balanced full tree or perfect tree. With a given height $\{h}$, the number of nodes can't exceed the $\{\displaystyle 2^{h+1}-1}$ as the number of nodes in a perfect tree. Thus $\{\displaystyle n\leq 2^{h+1}-1\to h\geq \log _{2}(n+1)-1}$.

* A binary Tree with $\{l}$ leaves has at least the height $\{\displaystyle h_{m}=\log _{2}(l)}$. With a given height ℎ, the number of leaves at that height can't exceed $\{\displaystyle 2^{h}}$ as the number of leaves at the height in a perfect tree. Thus $\{\displaystyle l\leq 2^{h}\to h\geq \log _{2}(l)}$.

* In a non-empty binary tree, if $\{n}$ is the total number of nodes and $\{e}$ is the total number of edges, then $\{\displaystyle e=n-1}$. This is obvious because each node requires one edge except for the root node.

* The number of null links (i.e., absent children of the nodes) in a binary tree of *n* nodes is *(n + 1)*.

* The number of internal nodes in a **complete** binary tree of n nodes is ⌊n/2⌋.

## Methods for storing binary trees

### Nodes and references

In a language with records and references, binary trees are typically constructed by having a tree node structure which contains some data and references to its left child and its right child. Sometimes it also contains a reference to its unique parent. If a node has fewer than two children, some of the child pointers may be set to a special null value, or to a special sentinel node.

This method of storing binary trees wastes a fair bit of memory, as the pointers will be null (or point to the sentinel) more than half the time; a more conservative representation alternative is threaded binary tree.

In languages with tagged unions such as ML, a tree node is often a tagged union of two types of nodes, one of which is a 3-tuple of data, left child, and right child, and the other of which is a "leaf" node, which contains no data and functions much like the null value in a language with pointers. For example, the following line of code in OCaml (an ML dialect) defines a binary tree that stores a character in each node.

```OCaml
type chr_tree = Empty | Node of char * chr_tree * chr_tree
```

### Arrays

Binary trees can also be stored in **breadth-first order** as an implicit data structure in arrays, and if the tree is a **complete** binary tree, this method **wastes no space**. In this compact arrangement, if a node has an index i, its children are found at indices $\{2i+1}$ (for the left child) and $\{2i+2}$ (for the right), while its parent (if any) is found at index $\{\left\lfloor {\frac {i-1}{2}}\right\rfloor}$ (assuming the root has index zero). Alternatively, with a **1-indexed array**, the implementation is simplified with children found at $\{2i}$ and $\{2i+1}$, and parent found at $\{\displaystyle \lfloor i/2\rfloor }$. This method benefits from **more compact storage and better locality of reference**, particularly during a **preorder traversal**. However, it is **expensive to grow** and **wastes space** proportional to *2h - n* for a tree of depth h with n nodes.

This method of storage is often used for **binary heaps**.

![BTarray](https://upload.wikimedia.org/wikipedia/commons/thumb/8/86/Binary_tree_in_array.svg/370px-Binary_tree_in_array.svg.png)

## Encoding

### Encoding ordered trees as binary trees

There is a natural one-to-one correspondence between ordered trees and binary trees. It allows any ordered tree to be uniquely represented as a binary tree, and vice versa:

Let T be a node of an ordered tree, and let B denote T's image in the corresponding binary tree. Then B's left child represents T's first child, while the B's right child represents T's next sibling.

For example, the ordered tree on the left and the binary tree on the right correspond:

![btexample](https://upload.wikimedia.org/wikipedia/commons/thumb/c/cd/N-ary_to_binary.svg/400px-N-ary_to_binary.svg.png)

In the pictured binary tree, the black, left, edges represent first child, while the blue, right, edges represent next sibling.

This representation is called a left-child right-sibling binary tree.

## Common operations

### Insertion

Nodes can be inserted into binary trees in between two other nodes or added after a leaf node. In binary trees, a node that is inserted is specified as **to whose child it will be**.

##### **Leaf nodes**
---

To add a new node after leaf node A, A assigns the new node as one of its children and the new node assigns node A as its parent.

##### **Internal nodes**
---

Insertion on internal nodes is slightly more complex than on leaf nodes. Say that the internal node is node A and that node B is the child of A. (If the insertion is to insert a right child, then B is the right child of A, and similarly with a left child insertion.) A assigns its child to the new node and the new node assigns its parent to A. Then the new node assigns its child to B and B assigns its parent as the new node.

![btinsertion](https://upload.wikimedia.org/wikipedia/commons/thumb/9/95/Insertion_of_binary_tree_node.svg/360px-Insertion_of_binary_tree_node.svg.png)

```The process of inserting a node into a binary tree```

### Deletion

Only certain nodes in a binary tree can be removed unambiguously.

##### **Node with zero or one children**
---

Suppose that the node to delete is node A. If A has no children, deletion is accomplished by setting the child of A's parent to null. If A has one child, set the parent of A's child to A's parent and set the child of A's parent to A's child. (taht requires A LOT of focus to read)

##### **Node with two children**
---

In a binary tree, a node with two children cannot be deleted unambiguously. However, in certain binary trees (including binary search trees) these nodes can be deleted, though with a rearrangement of the tree structure. (figured as much)

![btdeletion](https://upload.wikimedia.org/wikipedia/commons/thumb/3/31/Deletion_of_internal_binary_tree_node.svg/360px-Deletion_of_internal_binary_tree_node.svg.png)

```The process of deleting an internal node in a binary tree```

### Traversal

*When you're searching for something and your mama's not around to ask her about it... err... umm... anyway*

---

**Pre-order, in-order, and post-order** traversal visit each node in a tree by **recursively** visiting each node in the left and right subtrees of the root.

##### **Pre-order**
---

In pre-order we always visit the **current node**, next we recursively traverse the **current node's left subtree** and then we recursively traverse the **current node's right subtree**. The pre-order traversal is a **topologically sorted** one, because a parent node is processed before any of its child nodes is done.

![preorder](https://lh5.googleusercontent.com/b9g2tL87bG9rK2JIMBbZUIVTev9yOmfeJlx8Y_pmUiVDSjpmeof97B6d6ok4p6qrwq8TX2NaRqJKo1uXcqxNGzuHhq4H3uSaICyJcb4ERwsxyF-YVy0Sakb2EjEqlGn__FG_Ml4k)

```Node -> left subtree -> right subtree```

##### **In-order**
---

In in-order we always recursively traverse the **current node's left subtree**, next we visit the **current node** and lastly we recursively traverse the **current node's right subtree**

![inorder](https://lh3.googleusercontent.com/QRTgAbTK-54jPLU87RN4OAXWlBu1WR36LyaANNQ_Pg0N2gKmM0k_30h5S68Dwm_2qledVGQd5Byltj16KO3J5ufZs1ipixS4DKpHTRITXDiHajiLXEjf_sY7Id7e8G7r4mhBbANn)

```left subtree -> (parent) node -> right subtree```


##### **Post-order**
---

In post-order we always recursively traverse the **current node's left subtree**, next we recursively traverse the **current node's right subtree** and then visit the **current node**. Post-order traversal can be useful to get postfix expression of a binary expression tree.

![postorder](https://lh6.googleusercontent.com/dyKoxSFKtdnpEVpNOV1_460ovzzLqcIe7rRplr6YrUheWqVJgtk9GztN-QHkvbxtJlDCo8_Y5NzLevE0dNxsitYjV0o3hUruNwcxYDteBGTzNg9knB0kfOMMmtY5B7Xrie2tnd86)

```left subtree -> right subtree -> (parent) node```

##### **Depth-first order**
---

In depth-first order, we always attempt to visit the node **farthest from the root node that we can**, but with the caveat that **it must be a child of a node we have already visited**. Unlike a depth-first search on graphs, there is no need to remember all the nodes we have visited, because **a tree cannot contain cycles**. **Pre-order is a special case of this.**

*That's some real stuff and it's taking a toll on my brain*

##### **Breadth-first order**
---

Contrasting with depth-first order is breadth-first order, which always attempts to visit the node **closest to the root that it has not already visited**. Also called a *level-order traversal*.

![dfvsbf](https://qph.cf2.quoracdn.net/main-qimg-770386a52678c9c44552eef3452fd540-pjlq)

```Depth-first VS. Breadth-first```

