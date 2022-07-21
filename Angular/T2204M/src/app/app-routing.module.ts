import { NgModule } from '@angular/core';
import { RouterModule, Routes } from '@angular/router';
import { homeCPN } from './component/home';
import { LoginCPN } from './formLoginRGT/login';
import { registerCPN } from './formLoginRGT/RGT';
import { FCWT } from './newWeather/fcwt';
import { ClassCPN } from './practiceclass/weather';

const routes: Routes = [
  {path:'Fcwt',component:FCWT},
  {path:'CRwt',component:ClassCPN},
  {path:'test',component:homeCPN},
  {path:'login',component:LoginCPN},
  {path:'login/rgt2', redirectTo:'rgt2' , pathMatch:'full'},
  {path:'',redirectTo:'login',pathMatch:'full'},
  {path:'rgt2/login', redirectTo:'login' , pathMatch:'full'}
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
