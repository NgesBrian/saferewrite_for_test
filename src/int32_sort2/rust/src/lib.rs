pub fn int32_sort2(x:&mut[i32]) {
  let x0 = x[0];
  let x1 = x[1];
  if x1 < x0 {
    x[0] = x1;
    x[1] = x0
  }
}
