## Contributing Guidelines

| Type      | Naming       |
|---        |---           |
| Class     | CamelCase    |
| Directory | under_scored |
| File      | CamelCase    |
| Function  | camelCase    |
| Namespace | lowercase    |
| Variables | camelCase    |


### Naming schemes

    CamelCase: the name starts with a capital letter, and uses a capital letter for the beginning of each word. No underscore is used. Examples: LineDetector, GenericFactoryInterfaceBaseClass, HansMustermann. (Also called PascalCase)

    camelCase: like CamelCase, but it starts with a lower case letter. Examples: someValue, numberOfRows, remainingTime.

    lowercase: only lower-case letters are used.

    under_scored: no capital letters are used, and words are separated by underscores. Examples: filtered_output, line_count.
    
	ALL_CAPS: only capital letters are used, and words are separated by underscores. Examples: MAX_DISTANCE_THRESHOLD, DEFAULT_VALUE.
    
	ALLCAPS: only capital letters are used, and words are not separated. Examples: MAXDISTANCETHRESHOLD, DEFAULTVALUE.


Condensed code is harder to read, use white-spaces.

```c++
// Correct
int x[] = { -1, 1, 2, 5 };
for (int i = *x; *x * 3 <= 4 && *x > 0; ++x) {
 
// Hardly readable
int x[]={-1,1,2,5};
for(int i=*x;*x*3<=4&&*x>0;++x){
```