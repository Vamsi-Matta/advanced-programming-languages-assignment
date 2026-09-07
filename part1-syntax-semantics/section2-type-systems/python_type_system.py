def describe(value):
    print(f"Value: {value!r}, type: {type(value).__name__}")

value = 10
describe(value)
value = "ServiceNow"
describe(value)

number = 5
fraction = 2.5
print("Numeric addition:", number + fraction)
