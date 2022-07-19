import { HttpClient ,HttpParams} from "@angular/common/http";
import { Component, Input,OnInit } from "@angular/core";
import { Params } from "@angular/router";
import { ForeCastWT } from "../interface/FCwt";
import { IcurrentWeather } from "../interface/weatherinterface";
@Component({
  selector:"fc-weather",
  templateUrl:"./FCweather.html"
})
export class FCwComponent{
  @Input()data2!:ForeCastWT;
}
