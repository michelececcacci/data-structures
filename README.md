# vector

Dynamic vector implementation that has:
* o(n) search time 
* o(1) append and removal at end of the array time  (amortized) 
* o(n) removal from index time


The vector has o(n) space complexity

To run the tests use: 
```zsh
bazel test --test_output=all //:vector_test
```