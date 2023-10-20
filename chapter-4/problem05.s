# Original sum function:

# long sum(long *start, long count)
# start in %rdi, count in %rsi

sum:
  irmovq $8,%r8
  irmovq $1,%r9
  xorq %rax,%rax
  andq %rsi,%rsi
  jmp test
loop:
  mrmovq (%rdi),%r10
  addq %r10,%rax
  addq %r8,%rdi
  subq %r9,%rsi
test:
  jne loop
  ret



# absSum:

# long absSum(long *start, long count)
# start in %rdi, count in %rsi

sum:
  irmovq $8,%r8
  irmovq $1,%r9
  xorq %rax,%rax
  andq %rsi,%rsi
  jmp test
loop:
  mrmovq (%rdi),%r10
  andq %rsi,%rsi
  jl neg
  addq %r10,%rax
  jmp incr
neg:
  subq %r10,%rax
incr:
  addq %r8,%rdi
  subq %r9,%rsi
test:
  jne loop
  ret