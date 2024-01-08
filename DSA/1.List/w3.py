# Creating a list
my_list = [1, 2, 3, 4, 5]

# Accessing elements
print("Original List:", my_list)
print("First element:", my_list[0])
print("Last element:", my_list[-1])
print("Slicing:", my_list[1:4])  # Elements at index 1, 2, and 3

# Modifying elements
my_list[2] = 10
print("Modified List:", my_list)

# Appending and extending lists
my_list.append(6)
print("Appended List:", my_list)

extension_list = [7, 8, 9]
my_list.extend(extension_list)
print("Extended List:", my_list)

# Inserting elements
my_list.insert(2, 11)  # Insert 11 at index 2
print("List after insertion:", my_list)

# Removing elements
my_list.remove(10)  # Remove the first occurrence of 10
print("List after removal:", my_list)

popped_element = my_list.pop()  # Remove and return the last element
print("Popped Element:", popped_element)
print("List after pop:", my_list)

# Finding elements
index_of_5 = my_list.index(5)
print("Index of 5:", index_of_5)

# Count occurrences
count_of_3 = my_list.count(3)
print("Count of 3:", count_of_3)

# Sorting
my_list.sort()
print("Sorted List:", my_list)

# Reversing
my_list.reverse()
print("Reversed List:", my_list)

# Copying
copied_list = my_list.copy()
print("Copied List:", copied_list)

# Clearing the list
my_list.clear()
print("Cleared List:", my_list)