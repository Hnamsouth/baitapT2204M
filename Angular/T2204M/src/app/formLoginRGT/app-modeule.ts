import { NgModule } from '@angular/core';
import { RouterModule, Routes } from '@angular/router';
import { registerCPN } from './RGT';


const rt: Routes = [
  {path:'rgt2',component:registerCPN}
];

@NgModule({
  imports: [RouterModule.forRoot(rt)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
