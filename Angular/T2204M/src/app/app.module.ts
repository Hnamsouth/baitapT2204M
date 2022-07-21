import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';

import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { FormsModule } from '@angular/forms';
import { HttpClientModule } from '@angular/common/http';
import { FCWT } from './newWeather/fcwt';
import { ChildFCWT } from './childNewWt/childFcwt';
import { ForecastweatherComponent } from './SCwayFCWT/SCfcwt';
import { ClassCPN } from './practiceclass/weather';
import { homeCPN } from './component/home';
import { Router, RouterModule, Routes } from '@angular/router';
import { LoginCPN } from './formLoginRGT/login';
import { registerCPN } from './formLoginRGT/RGT';

const router:Routes=[
  {path:'rgt2',component:registerCPN}
]
@NgModule({
  declarations: [
    AppComponent,
    FCWT,
    ChildFCWT,
    ForecastweatherComponent,
    ClassCPN,
    homeCPN,
    LoginCPN,
    registerCPN

  ],
  imports: [
    BrowserModule,
    AppRoutingModule,
    FormsModule,        // khuon module
    HttpClientModule,
    RouterModule.forRoot(router)
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
