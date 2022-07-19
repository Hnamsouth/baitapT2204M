import {  NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';

import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { ClassCPN } from './practiceclass/weather';
import { FormsModule } from '@angular/forms';
import { HttpClientModule } from '@angular/common/http';
import { FCWT } from './newWeather/fcwt';
import { ChildFCWT } from './childNewWt/childFcwt';

@NgModule({
  declarations: [
    AppComponent,
    ClassCPN,
    FCWT,
    ChildFCWT

  ],
  imports: [
    BrowserModule,
    AppRoutingModule,
    FormsModule,        // khuon module
    HttpClientModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
