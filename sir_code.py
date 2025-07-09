class Node:
    def __init__(self, coefficient, power_x, power_y, power_z):
        self.coefficient = coefficient  # Coefficient of the term
        self.power_x = power_x  # Power of x
        self.power_y = power_y  # Power of y
        self.power_z = power_z  # Power of z
        self.next = None  # Pointer to the next node

class Polynomial:
    def __init__(self):
        self.head = None  # The head of the linked list

    # Add a term to the polynomial
    def add_term(self, coefficient, power_x, power_y, power_z):
        new_node = Node(coefficient, power_x, power_y, power_z)
        if not self.head:
            self.head = new_node  # If the list is empty, set the new node as the head
        else:
            current = self.head
            while current.next:  # Traverse to the end of the list
                current = current.next
            current.next = new_node  # Add the new node at the end

    # Print the polynomial in human-readable form
    def print_polynomial(self):
        current = self.head
        terms = []
        
        while current:
            # For each term, build its string representation
            term = f"{current.coefficient}"
            
            if current.power_x > 0:
                term += f"x^{current.power_x}" if current.power_x > 1 else "x"
            if current.power_y > 0:
                term += f"y^{current.power_y}" if current.power_y > 1 else "y"
            if current.power_z > 0:
                term += f"z^{current.power_z}" if current.power_z > 1 else "z"
            
            terms.append(term)
            current = current.next
        
        # Join all terms with " + " and print
        print(" + ".join(terms))

# Create a polynomial object
poly = Polynomial()

# Add terms to the polynomial corresponding to the expression
# 2xy^2z^3 + 3x^2yz^2 + 4xy^3z + 5x^2y^2 + 6y^3z + 7x^3z + 8xy^2z^5 + 9
poly.add_term(2, 1, 2, 3)  # 2xy^2z^3
poly.add_term(3, 2, 1, 2)  # 3x^2yz^2
poly.add_term(4, 1, 3, 1)  # 4xy^3z
poly.add_term(5, 2, 2, 0)  # 5x^2y^2
poly.add_term(6, 0, 3, 1)  # 6y^3z
poly.add_term(7, 3, 0, 1)  # 7x^3z
poly.add_term(8, 1, 2, 5)  # 8xy^2z^5
poly.add_term(9, 0, 0, 0)  # Constant term: 9

# Print the polynomial as a string
poly.print_polynomial()
