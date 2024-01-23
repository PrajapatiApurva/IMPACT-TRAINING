# Creating sets
set1 = {1, 2, 3, 4, 5}
set2 = {3, 4, 5, 6, 7}

# Adding elements
set1.add(6)
print("After adding 6 to set1:", set1)

# Removing elements
set1.remove(3)  # Raises an error if the element is not present
print("After removing 3 from set1:", set1)

set1.discard(2)  # Removes 2 if present, does nothing if not present
print("After discarding 2 from set1:", set1)

popped_element = set1.pop()  # Removes and returns an arbitrary element
print("Popped Element:", popped_element)
print("Set1 after pop:", set1)

# Set operations
union_set = set1.union(set2)
print("Union of set1 and set2:", union_set)

intersection_set = set1.intersection(set2)
print("Intersection of set1 and set2:", intersection_set)

difference_set = set1.difference(set2)
print("Difference of set1 and set2:", difference_set)

symmetric_difference_set = set1.symmetric_difference(set2)
print("Symmetric Difference of set1 and set2:", symmetric_difference_set)

# Set methods with update
set1.update(set2)  # Adds elements from set2 to set1
print("After updating set1 with set2:", set1)

# Other set methods
is_subset = set2.issubset(set1)
print("Is set2 a subset of set1:", is_subset)

is_superset = set1.issuperset(set2)
print("Is set1 a superset of set2:", is_superset)

is_disjoint = set1.isdisjoint(set2)
print("Are set1 and set2 disjoint:", is_disjoint)

# Copying
copied_set = set1.copy()
print("Copied Set:", copied_set)

# Clearing the set
set1.clear()
print("Cleared Set1:", set1)
