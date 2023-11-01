//Amazon 
// We will double the search space over here
// Initially 
// Step 1:
// lo = 0;
// hi = 0;
// Step 2:
// Increase search space by double
// if (arr(mid)<target) 
// {
//     lo = mid+1;
//     hi = lo + x;
//     x*=2;
// }

// reduce search space log n times
// else
// {
//     hi = mid-1;
//     bs(lo,hi,arr);
// }