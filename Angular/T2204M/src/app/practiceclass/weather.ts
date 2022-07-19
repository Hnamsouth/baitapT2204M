import { HttpClient ,HttpParams} from "@angular/common/http";
import { Component, Input,OnInit } from "@angular/core";
import { Params } from "@angular/router";
import { IcurrentWeather } from "../interface/weatherinterface";


@Component({
  selector:"app-weather",
  templateUrl:"./weather.html"
})
export class ClassCPN{
   data:IcurrentWeather|undefined;
  city2="ha long";
  city:string="hanoi";
   // tim cach lay du lieu tu api roi cho vao bien data
   constructor(private http:HttpClient) { //hàm này tự động chạy sau khi tạo component
    this.onSubmit(this.city);
  }
  /*
  ngOnInit(){ // hàm này tự động chạy sau khi print html xong
    const url = 'https://api.openweathermap.org/data/2.5/weather';
    let params = new HttpParams();
    params =  params.append('q','Hanoi');
    params =  params.append('appid','09a71427c59d38d6a34f89b47d75975c');
    params =  params.append('units','metric');
    this.http.get<IcurrentWeather>(url,{params: params})
      .subscribe(value=>{
        this.data = value;
      });
}*/


  onSubmit(city: string) {
    console.log(city)
    this.city=city;
    const url='https://api.openweathermap.org/data/2.5/weather';
    let params = new HttpParams();
    params=params.append('q',''+this.city+'')
    params=params.append('appid','09a71427c59d38d6a34f89b47d75975c')
    params=params.append('units','metric')
    params=params.append('lang','vi')
    this.http.get<IcurrentWeather>(url,{params:params})
    .subscribe(value=>{
      this.data=value;
      console.log(value)
    })
  }
    // const url='https://api.openweathermap.org/data/2.5/weather?q=Hanoi,vietnam&appid=09a71427c59d38d6a34f89b47d75975c&units=metric'
    changecity(){
      const url='https://api.openweathermap.org/data/2.5/weather';
      let params = new HttpParams();
      params=params.append('q',this.city2)
      params=params.append('appid','09a71427c59d38d6a34f89b47d75975c')
      params=params.append('units','metric')
      params=params.append('lang','vi')
      this.http.get<IcurrentWeather>(url,{params:params})
      .subscribe(value=>{
        this.data=value;
        console.log(value)
      })
    }

}
