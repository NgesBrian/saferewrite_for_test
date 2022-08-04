use sha2::{Sha512,Digest};

pub fn sha512_300bytes(out:&mut[u8;64],m:&[u8]) {
  let h = Sha512::digest(m);
  out.copy_from_slice(&h)
}
