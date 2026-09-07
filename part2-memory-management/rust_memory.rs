fn show_value(value: &i32) {
    println!("Borrowed value: {}", value);
}

fn main() {
    let heap_value = Box::new(42);
    show_value(&heap_value); // Borrow; ownership is not transferred.
    println!("Owner still uses value: {}", heap_value);

    let buffer = vec![0_u8; 50_000_000];
    println!("Allocated {} bytes on the heap", buffer.len());

    // Memory owned by heap_value and buffer is released automatically
    // when their owners go out of scope.
}
