function describe(value) {
    console.log(`Value: ${JSON.stringify(value)}, type: ${typeof value}`);
}

let value = 10;
describe(value);
value = "ServiceNow";
describe(value);

console.log('"5" + 2 =', "5" + 2);
console.log('"5" - 2 =', "5" - 2);
