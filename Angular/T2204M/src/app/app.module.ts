import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';

import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { ClassCPN } from './practiceclass/weather';
import { FormsModule } from '@angular/forms';
import { HttpClientModule } from '@angular/common/http';
import { FCwComponent } from './forecastweather/FCweather';
import { ftCPN } from './FARTHER/ft';

@NgModule({
  declarations: [
    AppComponent,
    ClassCPN,
    FCwComponent,
    ftCPN

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
