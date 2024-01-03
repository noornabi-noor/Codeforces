def char_to_octal(char):
    decimal_value = ord(char)  
    octal_value = oct(decimal_value) 
    return octal_value

input_string = input()

octal_values = [char_to_octal(char) for char in input_string]

print(octal_values)